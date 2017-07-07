# CMake File for executable IVYUSample
#
set(APP_NAME IVYUSample)
string(CONCAT TEST_NAME "test_" ${APP_NAME})

set (APP_MAIN
    IVYUSampleMain.cxx
)

set(APP_SOURCES
    HelloHelper.cxx
    LangHelper.cxx
)

add_executable(${APP_NAME}
	${APP_MAIN}
	${APP_SOURCES}
)

target_compile_features(${APP_NAME} PUBLIC cxx_std_14)
 
if(iwyu_path)
    set_property(TARGET ${APP_NAME} PROPERTY CXX_INCLUDE_WHAT_YOU_USE ${iwyu_path})
endif()


