#ifndef PACHARTOOLS_H
#define PACHARTOOLS_H

/*
*  utility function for string ( char *) manipulation
*/

int charLen(char *str)
{
	int i = 0;
	while (str[i++] != 0);
	return i - 1;
}

char* fill(char* str, int length, char charcode, bool initialize)
{
	int i = 0;
	if (!initialize) i = charLen(str);  // start from were str is already filled
	while (i<length)
	{
		str[i++] = charcode;
	}
	str[i] = 0;
	return str;
}

char* strcpy_cln(char* dest,const char* src, uint8_t size ){
	strcpy(dest, src);
	for(int i=strlen(dest)+1; i< size; i++){
		dest[i] = 0;
	}
}
char* strpad(char* str, uint8_t size, uint8_t clean = false){
	//DEBUG_MSG("[strpad]str:%s|\tstrlen:%d\tstrSize:%d\n",str,strlen(str),size)
	if(clean) strcpy(str,"");
	sprintf(str,"%-*s",size-1,str);
}


char* strtrim(char* str){
	String _str = str;
	_str.trim();
	strcpy(str,_str.c_str());
	return str;
}
#endif
