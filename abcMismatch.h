#pragma once
#include "abc.h"

class abcTsk:public abc{
private:
  int doMismatch;
  char *refName;
  gzFile outfilegz;
public:
  void run(funkyPars  *pars);
  void clean(funkyPars *pars);  
  void print(funkyPars *pars);  
  void openfile(const char *outfiles);
  void getOptions(argStruct *arguments);
  void printArg(FILE *argFile);
  abcTsk(const char *outfiles,argStruct *arguments,int inputtype);
  ~abcTsk();
};


