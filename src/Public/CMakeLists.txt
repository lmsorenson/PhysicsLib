file(GLOB public_files *.h)
file(GLOB public_files *.cpp)

# PRIVATE_SOURCE private source files.
SET(PRIVATE_SOURCE ${PRIVATE_SOURCE} ${public_files} PARENT_SCOPE)