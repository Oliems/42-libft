# ft_lib
Library of functions for 42 School

# TODO
- Handle overflow in ft_atoi().

Errors found:
For ft_substr, in /Users/mbarberi/francinette/tests/libft/fsoares/test_substr.c:

Error in test 16: ft_substr("hola", 2, 30): Memory problems!
     in sigabort utils.c:58:1
     in ft_substr ft_substr.c:49:10
     in test_single_substr test_substr.c:7:2
     in test_substr test_substr.c:28:8
     in main test_substr.c:43:2

=================================================================
==44737==ERROR: AddressSanitizer: global-buffer-overflow on address 0x000102046885 at pc 0x000102045fdc bp 0x7ffeedbc2680 sp 0x7ffeedbc2678
READ of size 1 at 0x000102046885 thread T0
    #0 0x102045fdb in ft_substr ft_substr.c:49
    #1 0x10203f75f in test_single_substr test_substr.c:7
    #2 0x10203fc64 in test_substr test_substr.c:28
    #3 0x10203ff2d in main test_substr.c:43
    #4 0x7fff781b93d4 in start (libdyld.dylib:x86_64+0x163d4)

0x000102046885 is located 59 bytes to the left of global variable '<string literal>' defined in 'test_substr.c:20:44' (0x1020468c0) of size 2
  '<string literal>' is ascii string 'h'
0x000102046885 is located 0 bytes to the right of global variable '<string literal>' defined in 'test_substr.c:16:30' (0x102046880) of size 5
  '<string literal>' is ascii string 'hola'
SUMMARY: AddressSanitizer: global-buffer-overflow ft_substr.c:49 in ft_substr
