# Specify path to own LVGL config header
set(LV_CONF_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/Core/Inc/lv_conf.h
    CACHE STRING "" FORCE)

# Fetch LVGL from GitHub
FetchContent_Declare(lvgl
        GIT_REPOSITORY https://github.com/lvgl/lvgl.git
        GIT_TAG v9.2.2
)
FetchContent_MakeAvailable(lvgl)
