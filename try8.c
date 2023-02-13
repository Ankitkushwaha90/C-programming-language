#if 0 /* Starts the "comment", anything from here on is removed by preprocessor */
/* A large amount of code with multi-line comments */  int foo() {    /* lots of code */    ...
    if(2<3) {     
	printf("hello");
      return 1;    }
    return 0; }
#endif /* 0 */
/* code from here on is "uncommented" (included in compiled executable) */ 