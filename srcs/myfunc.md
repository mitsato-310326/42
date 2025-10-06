## bzero
多分styring(先頭ポインタ)と文字数を受け取って文字数ブン先頭からヌル文字に置き換えましょうってことをやってるんでしょうね。
man には　void bzero(void s[.n], size_t n)
ってあるけど　void bzero(char *s, int n)でいいだろ別に

tester通ったけど、コレ例えば("abcdefg", 100)で指定されてない範囲ヌル埋めしちゃうけどいいのかな

## calloc
```void *calloc(size_t nmemb, size_t size);```

```
	calloc()
       The calloc() function allocates memory for an array of nmemb elements
       of  size  bytes  each  and returns a pointer to the allocated memory.
       The memory is set to zero.  If nmemb or size is 0, then calloc()  re‐
       turns a unique pointer value that can later be successfully passed to
       free().

       If the multiplication of nmemb and size would result in integer over‐
       flow,  then calloc() returns an error.  By contrast, an integer over‐
       flow would not be detected in the following call  to  malloc(),  with
       the  result  that an incorrectly sized block of memory would be allo‐
       cated:

           malloc(nmemb * size);
```
一つsize byteを要するnmemb個の値を保有する領域を確保する。
それを全部0で初期化する。多分charでもintでも全てのbitに0が撃ち込まれている物を0やNULLと認識してくれるようなのでいったん全部に0を打ち込む。
マイナスや領域を超えるmallocは防がなければならないが、0の時にfreeできる領域を確保する。というのが優先されるので(0, -5)とかはNULLではいけない。

## memccpy

```
void *memccpy(void dest[restrict .n], const void src[restrict .n],
                     int c, size_t n);
```

DESCRIPTION
       The memccpy() function copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found.

       If the memory areas overlap, the results are undefined.

RETURN VALUE
       The memccpy() function returns a pointer to the next character in dest after c, or NULL if c was not found in the first n characters of src.

## memset

DESCRIPTION
       The  memset()  function  fills  the  first n bytes of the memory area
       pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.

## strlcat

size_t strlcat(char dst[restrict .dsize], const char *restrict src,
                      size_t dsize);
