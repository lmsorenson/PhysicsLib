file(GLOB private_files *.h)
file(GLOB private_files *.cpp)

# PRIVATE_SOURCE private source files.
SET(PRIVATE_SOURCE ${PRIVATE_SOURCE} ${private_files} PARENT_SCOPE)