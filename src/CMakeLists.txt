add_subdirectory(Private)
add_subdirectory(Public)

# PRIVATE_SOURCE private source files.
SET(SOURCE_INCLUDES ${SOURCE_INCLUDES} ${PRIVATE_SOURCE} ${PUBLIC_SOURCE} PARENT_SCOPE)