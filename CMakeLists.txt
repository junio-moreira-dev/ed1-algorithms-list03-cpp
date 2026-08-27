cmake_minimum_required(VERSION 4.2)
project(ed1_algorithms_list03_cpp)

set(CMAKE_CXX_STANDARD 20)

#add_executable(ed1_algorithms_list03_cpp main.cpp
#        src/Exer01_SortedArrayInsert.cpp
#        src/Exer02_RemoveElementInPlace.cpp
#        src/Exer03_MergeSortedArrays.cpp
#        src/Exer04_PivotArrayPartition.cpp
#)

# Executáveis individuais para cada exercício
add_executable(Exer01_SortedArrayInsert src/Exer01_SortedArrayInsert.cpp)
add_executable(Exer02_RemoveElementInPlace src/Exer02_RemoveElementInPlace.cpp)
add_executable(Exer03_MergeSortedArrays src/Exer03_MergeSortedArrays.cpp)
add_executable(Exer04_PivotArrayPartition src/Exer04_PivotArrayPartition.cpp)

# Se ainda mantiver um main.cpp na raiz, declare-o aqui:
add_executable(main_app main.cpp)