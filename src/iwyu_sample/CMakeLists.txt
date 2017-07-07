# CMake File for executable IVYUSample
#
# (c) 2017 Maurer & Treutner GmbH & CO. KG, Leopoldshafen
#

# set application name
set(APP_NAME IVYUSample)

# set name of source file containing main-function
set (APP_MAIN
    IVYUSampleMain.cxx
)

# set the names of all additional sources
set(APP_SOURCES
    HelloHelper.cxx
    LangHelper.cxx
)

# define executable
add_executable(${APP_NAME}
	${APP_MAIN}
	${APP_SOURCES}
)

# we want to use C++ 14 for this sample
set_property(TARGET ${APP_NAME} PROPERTY CXX_STANDARD 14)
 
# if iwyu has been found, we set the property to use it during our build
if(iwyu_path)
    set_property(TARGET ${APP_NAME} PROPERTY CXX_INCLUDE_WHAT_YOU_USE ${iwyu_path})
endif()


