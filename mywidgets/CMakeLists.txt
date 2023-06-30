set(CMAKE_VERBOSE_MAKEFILE ON)
add_library(
        overlayWidget STATIC
        OverlayWidget.cpp
        OverlayWidget.h
)
target_compile_features(overlayWidget PUBLIC cxx_std_17)
target_compile_options(overlayWidget PRIVATE ${MEMENTO_COMPILER_FLAGS})
target_link_libraries(overlayWidget PUBLIC Qt5::Widgets)

add_library(
        textHolder STATIC
        TextHolder.cpp
        TextHolder.h
        FuriganaCreatorPopup.cpp
        FuriganaCreatorPopup.h
        )
target_compile_features(textHolder PUBLIC cxx_std_17)
target_compile_options(textHolder PRIVATE ${MEMENTO_COMPILER_FLAGS})
target_link_libraries(textHolder PUBLIC Qt5::Widgets overlayWidget)


add_library(
        TranslationHolder STATIC
        TranslationHolder.cpp
        TranslationHolder.h
        ../TranslationRequestHandler.cpp
        ../TranslationRequestHandler.h
)
target_compile_features(TranslationHolder PUBLIC cxx_std_17)
target_compile_options(TranslationHolder PRIVATE ${MEMENTO_COMPILER_FLAGS})
target_link_libraries(TranslationHolder PUBLIC Qt5::Widgets)

