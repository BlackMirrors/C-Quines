#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define MAIN int main()

MAIN {
string s;
s="#include <iostream>\n#include <fstream>\n#include <string>\nusing namespace std;\n#define MAIN int main()\n\nMAIN {\nstring s;\ns=\"%s\"\nsize_t pos = 0;\nstring b = s;\nwhile ((pos = b.find(\"\\u000A\", pos)) != string::npos) {\nb.replace(pos, 1, \\u0022\\u005C\\u005Cn\\u0022);\npos += 2;\n}\npos=0;\nwhile ((pos = b.find(\\u0022\\u005C\\u0022\\u0022, pos)) != string::npos) {\nb.replace(pos, 1, \\u0022\\u005C\\u005C\\u005C\\u0022\\u0022);\npos += 3;\n}\npos = 0;\nwhile ((pos = s.find(\\u0022\\u005C\\u005Cu0022\\u0022, pos)) != string::npos) {\ns.replace(pos, 6, \\u0022\\u005C\\u0022\\u0022);\npos += 1;\n}\npos = 0;\nwhile ((pos = b.find(\\u0022\\u005C\\u005Cu0022\\u0022, pos)) != string::npos) {\nb.replace(pos, 6, \\u0022\\u005C\\u005C\\u005C\\u005Cu0022\\u0022);\npos += 3;\n}\npos = 0;\nwhile ((pos = s.find(\\u0022\\u005C\\u005Cu000A\\u0022, pos)) != string::npos) {\ns.replace(pos, 6, \\u0022\\u005C\\u005Cn\\u0022);\npos += 1;\n}\npos = 0;\nwhile ((pos = b.find(\\u0022\\u005C\\u005Cu000A\\u0022, pos)) != string::npos) {\nb.replace(pos, 6, \\u0022\\u005C\\u005C\\u005C\\u005Cu000A\\u0022);\npos += 3;\n}\npos = 0;\nwhile ((pos = s.find(\\u0022\\u005C\\u005Cu005C\\u0022, pos)) != string::npos) {\ns.replace(pos, 6, \\u0022\\u005C\\u005C\\u0022);\npos += 1;\n}\npos = 0;\nwhile ((pos = b.find(\\u0022\\u005C\\u005Cu005C\\u0022, pos)) != string::npos) {\nb.replace(pos, 6, \\u0022\\u005C\\u005C\\u005C\\u005Cu005C\\u0022);\npos += 3;\n}\nb+=\\u0022\\u005C\\u0022;\\u0022;\ns=s.replace(s.find(\\u0022%s\\u0022),3,b);\nofstream myfile;\nmyfile.open(\\u0022Grace_kid.cpp\\u0022,ios::trunc);\nmyfile<<s;\nreturn 0;\n}\n";
size_t pos = 0;
string b = s;
while ((pos = b.find("\n", pos)) != string::npos) {
b.replace(pos, 1, "\\n");
pos += 2;
}
pos=0;
while ((pos = b.find("\"", pos)) != string::npos) {
b.replace(pos, 1, "\\\"");
pos += 3;
}
pos = 0;
while ((pos = s.find("\\u0022", pos)) != string::npos) {
s.replace(pos, 6, "\"");
pos += 1;
}
pos = 0;
while ((pos = b.find("\\u0022", pos)) != string::npos) {
b.replace(pos, 6, "\\\\u0022");
pos += 3;
}
pos = 0;
while ((pos = s.find("\\u000A", pos)) != string::npos) {
s.replace(pos, 6, "\\n");
pos += 1;
}
pos = 0;
while ((pos = b.find("\\u000A", pos)) != string::npos) {
b.replace(pos, 6, "\\\\u000A");
pos += 3;
}
pos = 0;
while ((pos = s.find("\\u005C", pos)) != string::npos) {
s.replace(pos, 6, "\\");
pos += 1;
}
pos = 0;
while ((pos = b.find("\\u005C", pos)) != string::npos) {
b.replace(pos, 6, "\\\\u005C");
pos += 3;
}
b+="\";";
s=s.replace(s.find("%s"),3,b);
ofstream myfile;
myfile.open("Grace_kid.cpp",ios::trunc);
myfile<<s;
return 0;
}
