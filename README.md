# NOTE
- Cannot + 2 string literal. Explaination [Here](http://www.cplusplus.com/forum/beginner/13507/)
- When we receive a string from **cin**, we don't know how long the string is. If we need to store its size to a variable, better use dynamic allocate type as follow:
```cpp
    string msg;
    cin >> msg;
    const string::size_type col_size = msg.size();
```