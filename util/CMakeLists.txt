add_library(
    globalmediator STATIC
    globalmediator.cpp
    globalmediator.h
)
target_compile_features(globalmediator PUBLIC cxx_std_17)
target_compile_options(globalmediator PRIVATE ${MEMENTO_COMPILER_FLAGS})
target_include_directories(globalmediator PRIVATE ${MEMENTO_INCLUDE_DIRS})
target_link_libraries(
    globalmediator
    PUBLIC Qt5::Core
)

add_library(
    utils STATIC
    utils.cpp
    utils.h
)
target_compile_features(utils PUBLIC cxx_std_17)
target_compile_options(utils PRIVATE ${MEMENTO_COMPILER_FLAGS})
target_include_directories(utils PRIVATE ${MEMENTO_INCLUDE_DIRS})
target_link_libraries(
    utils
    PUBLIC Qt5::Core
)

