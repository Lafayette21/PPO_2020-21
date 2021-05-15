#include "PrintHelper.h"
#include <iostream>

void help_me_print_this(const Delimited * del)
{    
    char buffer[20];
    if ( fragment_size( del ) < (int)sizeof( buffer ) ) 
    {
        get_fragment( del, buffer );
        std::cout << " >" << buffer << "<";
    }
    else 
    {
        std::cout << " ** za duzo do wypisania ** ";
    }
}

void get_fragment (const struct Delimited * del, char* bufor)
{
  const char * wsk = del->begin;
  int i = 0;
  while (wsk != del->end)
  {
    bufor[i] = *wsk;
    wsk++;
    i++;
  }
  bufor[i] = '\0';
    
} 