cmake_minimum_required(VERSION 3.8)
project(c_language)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        1_source_code/10_char_array.c
        1_source_code/11_function_extern.c
        1_source_code/1_hello.c
        1_source_code/2_wendu.c
        1_source_code/3_constant.c
        1_source_code/4_file_copy.c
        1_source_code/4_file_copy_2.c
        1_source_code/5_char_count.c
        1_source_code/6_line_count.c
        1_source_code/7_world_count.c
        1_source_code/8_array.c
        1_source_code/9_function.c
        2_source_code/1_char_array_strlen.c
        2_source_code/2_char_to_int.c
        2_source_code/3_char_to_lower.c
        2_source_code/4_delete_char_from_chars.c
        2_source_code/5_chars_join.c
        3_source_code/1_binsearch.c
        3_source_code/2_switch_count.c
        3_source_code/3_shellsort.c
        3_source_code/4_string_reverse.c
        3_source_code/5_string_trim.c
        4_source_code/1_function_base.c
        4_source_code/1_get_line.c
        4_source_code/1_main.c
        4_source_code/1_string_index.c
        5_source_code/1_ip_address.c
        5_source_code/2_pointer_swap.c exercise/2_1.c)

set(SOURCE_FILES_TEST)

#add_executable(3_char_to_lower ${SOURCE_FILES_TEST} 2_source_code/3_char_to_lower.c)
#add_executable(2_char_to_int ${SOURCE_FILES_TEST} 2_source_code/2_char_to_int.c)
#add_executable(4_delete_char_from_chars 2_source_code/4_delete_char_from_chars.c)
add_executable(xx 2_source_code/5_chars_join.c)