void bad() 33
size_t data ; 35
size_t & dataRef = data ; 36
data = 0; 38
char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; 40
if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  42
data = strtoul ( inputBuffer , NULL , 0 ); 45
size_t data = dataRef ; 53
wchar_t * myString ; 55
if ( data > wcslen ( HELLO_STRING ) )  59
myString = new wchar_t [ data ]; 61
wcscpy ( myString , HELLO_STRING ); 63
printWLine ( myString ); 64
void printWLine (const wchar_t * line) 18
if ( line != NULL )  20
wprintf ( L "%ls\n" , line ) 22
delete [ ] myString 65