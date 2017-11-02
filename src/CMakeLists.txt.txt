#ja postavuvame minimalnata potrebna verzija na cmake
cmake_minimum_required (VERSION 2.6)


#postavuvame ime na proektot, 
#voedno i PROJECT_NAME promenlivata
project(domasna3)


#Mu kazuvame na CMake deka vo patekata na tekovniot proekt 
#vo direktoriumot include da gi pobara .h datotekite
target_include_directories(target
    PRIVATE ${PROJECT_SOURCE_DIR}/include
)


#na sledniot nachin se postavuvaat datotekite so izvoren kod
set(SOURCES
    src/fibonacci.c
    src/main.c
    src/msg.c
)


#.exe datotekata ja imenuvame domasna3 
#i pravime build so main.c, fibonacci.c i msg.c
#PROJECT_NAME dobiva vrednost vo project() funkcijata
#SOURCES promenlivata dobiva vrednost vo set(SOURCES ...) funkcijata
add_executable(${PROJECT_NAME} ${SOURCES})