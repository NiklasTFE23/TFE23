# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(opencv_basics VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic -O0)

# search for module opencv
find_package( OpenCV ) # alternative: find_package( OpenCV REQUIRED )

# continue only if opencv is found
if(OpenCV_FOUND)

include(FetchContent)

    # add executable for opencv hello world
    add_executable(opencv_hello Hello_world.cpp)
    # declare the path to the image we want to work with
    target_compile_definitions(opencv_hello PRIVATE OUTPATH="${CMAKE_CURRENT_BINARY_DIR}")
    # include and link all opencv stuff
    target_include_directories(opencv_hello PUBLIC ${OpenCV_INCLUDE_DIRS} )
    target_link_libraries( opencv_hello ${OpenCV_LIBRARIES})

    # add an executable for opencv contours 
    #add_executable(opencv_contours src/contours.cpp)
    # declare the path to the image we want to work with
    #target_compile_definitions(opencv_contours PRIVATE IMGPATH="${CMAKE_CURRENT_LIST_DIR}/resources" OUTPATH="${CMAKE_CURRENT_BINARY_DIR}")
    # include and link all opencv stuff
    #target_include_directories(opencv_contours PUBLIC ${OpenCV_INCLUDE_DIRS} )
    #target_link_libraries( opencv_contours ${OpenCV_LIBRARIES})

    # add an executable for opencv contours 
    add_executable(Aufgabe1 Aufgabe1.cpp)
    # declare the path to the image we want to work with
    target_compile_definitions(Aufgabe1 PRIVATE IMGPATH="${CMAKE_CURRENT_LIST_DIR}" OUTPATH="${CMAKE_CURRENT_BINARY_DIR}")
    # include and link all opencv stuff
    target_include_directories(Aufgabe1 PUBLIC ${OpenCV_INCLUDE_DIRS} )
    target_link_libraries( Aufgabe1 ${OpenCV_LIBRARIES})

    FetchContent_Declare(cvplot
    GIT_REPOSITORY https://github.com/Profactor/cv-plot.git
    GIT_TAG origin/master) # or whatever tag you want
    FetchContent_GetProperties(cvplot)
    #if(NOT cvplot_POPULATED)
    set(CVPLOT_USE_CONAN FALSE)
    FetchContent_Populate(cvplot)

    # add executable for cvplot hello world
    add_executable(cvplot_hello CVPlot.cpp)
    target_include_directories(cvplot_hello PUBLIC ${OpenCV_INCLUDE_DIRS} ${cvplot_SOURCE_DIR}/CvPlot/inc)
    target_link_libraries( cvplot_hello ${OpenCV_LIBRARIES})

endif()