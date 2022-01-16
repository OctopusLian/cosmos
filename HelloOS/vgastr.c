/*
 * @Description: 
 * @Author: neozhang
 * @Date: 2022-01-16 23:42:50
 * @LastEditors: neozhang
 * @LastEditTime: 2022-01-16 23:43:06
 */
void _strwrite(char* string)
{
    char* p_strdst = (char*)(0xb8000);
    while (*string)
    {

        *p_strdst = *string++;
        p_strdst += 2;
    }
    return;
}

void printf(char* fmt, ...)
{
    _strwrite(fmt);
    return;
}
