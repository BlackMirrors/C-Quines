#include <iostream>
using namespace std;
char*s="#include <iostream>%cusing namespace std;%cchar*s=%c%s%c;%c/*%cthis is a comment%c*/%cchar printMyProgram(){%creturn printf(s,10,10,34,s,34,10,10,10,10,10,10,10,10,10,10,10,10,10);%c}%cint main(){%c/*%ccomment inside main%c*/%cprintMyProgram();%creturn 1;%c}";
/*
this is a comment
*/
char printMyProgram(){
return printf(s,10,10,34,s,34,10,10,10,10,10,10,10,10,10,10,10,10,10);
}
int main(){
/*
comment inside main
*/
printMyProgram();
return 1;
}
