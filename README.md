# Understanding Basic C++ Assumptions


## Aim & Objectives

The aim and objectives of this chapter is to review the c++ basics before moving forward. We will review

- Basic language syntax
- Basic I/O
- Control structures, statements and looping
- Operators
- Function basics
- User defined types
- Namespace basics


## Reviewing Basic C++ Language Syntax

### Comment styles

There are two types of comment

- Multiline comments

```c++
    /* 
     * This is a multiline comment!
     * Spanning multiple lines!
     */
```
- Singleline Comments

```c++
    //    This is a single line comment!
```


### Variable declaration and standard data types

Datatypes include:

- int: To store whole number
- float: To store floating point value
- double: To store double precision floating point value
- char: To store charactoers
- bool: To storing true or false


```c++
    int x = 5;
    int a = x;
    
    float y = 9.87;
    float y2 = 10.85f; // f is a float literal, very optional
    float b = y;
    
    
    double yy = 123456.76;
    double c = yy;
    
    char z = 'Z';
    char d = z;
    
    
    bool test = true;
    bool e = test;
    bool f = !test;
```