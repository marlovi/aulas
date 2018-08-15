typedef void(*split_fn)(const char *, size_t, void *);
 
void split(const char *str, char sep, split_fn fun, void *data)
{
    unsigned int start = 0, stop;
    for (stop = 0; str[stop]; stop++) {
        if (str[stop] == sep) {
            fun(str + start, stop - start, data);
            start = stop + 1;
        }
    }
    fun(str + start, stop - start, data);
}