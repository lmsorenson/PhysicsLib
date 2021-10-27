# Load .h files from PhysicsLib folder
file(GLOB lib_files PhysicsLib/*.h)

message(STATUS "Readout sources: ")
FOREACH(INCLUDE ${lib_files})
    message(STATUS "include found: ${INCLUDE}")
ENDFOREACH()

# LIB_INCLUDES should files in the public interface.
SET(LIB_INCLUDES ${LIB_INCLUDES} ${lib_files} PARENT_SCOPE)
