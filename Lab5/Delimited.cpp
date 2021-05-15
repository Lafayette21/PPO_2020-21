#include <iostream>
#include "Delimited.h"
#include <stdio.h>

void chunk (const char* napis, struct Delimited * del, char sep)
{
  del->separ = sep;
  del->begin = napis;
  del->end = napis;
  del->wsk_napis = napis;
}

void rewind (struct Delimited * del)
{
  del->begin = del->end = del->wsk_napis;
}

int fragment_size (const struct Delimited * del)
{
  return (del->end - del->begin);
}

bool next(struct Delimited *del )
{
	if (*del->end == '\0'){
		return false;
	}
	else {
		while (*del->end == del->separ)
			del->end++;
		del->begin = del->end;
		while (*del->end != del->separ && *del->end != '\0')
			del->end++;
		return true;
	}
}

bool prev (struct Delimited * del)
{
	if(del->begin == del->wsk_napis){
		return false;
	}
	else{
		del->begin --;
		while (*del->begin == del->separ)
			del->begin --;
		del->end = del->begin +1;
		while (*del->begin != del->separ && del->begin != del->wsk_napis)
			del->begin--;
		if (del->begin != del->wsk_napis) del->begin ++;
		return true;


	}

}