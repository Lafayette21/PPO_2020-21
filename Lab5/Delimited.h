#pragma once

struct Delimited 
{
  char separ;
  const char * begin;
  const char * end;
  const char * wsk_napis;
};

//procedura przygotowująca pomocniczą strukturę, jako argumenty przyjmuje stałą napisową, wskaźnik na strukturę Delimited oraz znak separatora.
void chunk (const char*, struct Delimited *, char);

//procedura wracająca na początek napisu, jako argument wskaźnik na strukturę
void rewind (struct Delimited *);

// procedura przesuwająca wskaźnik na następny wyraz napisu
bool next (struct Delimited *);

// procedura przesuwająca wskaźnik na następny wyraz napisu
bool prev (struct Delimited *);


//Procedura zwracajaca rozmiar tekstu w strukturze Delimited
int fragment_size (const struct Delimited *);