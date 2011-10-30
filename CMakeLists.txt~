cmake_minimum_required(VERSION 2.6)
project(dresses)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING
        "Choose the type of build, options are: None Debug Release
RelWithDebInfo MinSizeRel."
	      FORCE)
endif(NOT CMAKE_BUILD_TYPE)

option(USE_STATIC_VIEW "Compile view statically into dresses" OFF)

if(WIN32 OR CYGWIN)
	add_definitions(-DDLL_EXPORT)
endif()


find_library(CPPCMS cppcms)
find_library(BOOSTER booster)
find_library(CPPDB wtdbosqlite3)

find_program(TMPLCC cppcms_tmpl_cc)

#include_directories(./templates)

if(WIN32)
	add_definitions(-DDLL_EXPORT)
endif()


set(TEMPLATES
	admin
	content1
	content2
)

set(SRC
	dresses.cpp
	datasession.cpp
	model/product.cpp
	model/category.cpp
	model/collection.cpp
	model/image.cpp
	model/video.cpp
	utils/jsonutils.cpp
	utils/formgenerator.cpp
	services/productsservice.cpp
	pages/basepage.cpp
	pages/productpage.cpp
)

set(TEMPLATE_TARGETS)

foreach(TEMPLATE ${TEMPLATES})
add_custom_command(
	OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/templates/${TEMPLATE}.cpp
	COMMAND ${TMPLCC}
		-d dresses
		-o ${CMAKE_CURRENT_SOURCE_DIR}/templates/${TEMPLATE}.cpp
		${CMAKE_CURRENT_SOURCE_DIR}/templates/${TEMPLATE}.tmpl
	DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/templates/${TEMPLATE}.tmpl)
	set(TEMPLATE_TARGETS ${TEMPLATE_TARGETS}
		${CMAKE_CURRENT_SOURCE_DIR}/templates/${TEMPLATE}.cpp)
endforeach()

if(USE_STATIC_VIEW)
	add_executable(dresses ${SRC} ${TEMPLATE_TARGETS})
	target_link_libraries(dresses ${BOOSTER} ${CPPCMS} ${CPPDB})
else()
	add_executable(dresses ${SRC})
	add_library(view SHARED ${TEMPLATE_TARGETS})
	target_link_libraries(dresses view ${BOOSTER} ${CPPCMS} ${CPPDB})
endif()



