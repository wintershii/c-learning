#include <iostream>
#include <string.h>

using namespace std;

class String {
public:
    String(const char *str = NULL);
    String(const String &other);
    ~String(void);
    String &operator = (char *str);
    String &operator = (const String & other);
    int operator == (String &other);
    int operator == (char *str);
    char * getStr() { return m_data;};
private:
    char *m_data;
    int length;
};

String::String(const char *str) {
    m_data = new char[strlen(str) + 1];
    m_data = (char *)str;
    length = strlen(str);
}

String::String(const String &other) {
    m_data = new char[other.length + 1];
    m_data = other.m_data;
    length = other.length;
}

String::~String() {
//    free(&length);
}

String& String::operator=(char *str) {
    String s(str);
    return s;
}

String& String::operator=(const String &other) {
    String *s = new String(other);
    m_data = s->m_data;
    length = s->length;
    return *s;
}

int String::operator==(char *str) {
    return strcmp(m_data,str) ? 0 : 1;
}

int String::operator==(String &other) {
    return strcmp(m_data,other.m_data) ? 0 : 1;
}

int main() {
    char *c1 = "shidongxuan";
    char *c2 = "okhttp";
    String s1(c1);
    puts(s1.getStr());
    cout << s1.operator == (c2) << endl;
    String s2(c2);
    s1.operator = (s2);
    puts(s1.getStr());
    cout << s1.operator == (c2) << endl;
}



