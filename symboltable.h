#ifndef SYMBOL_H_INCLUDED
#define SYMBOL_H_INCLUDED

#include "symboltabledef.h"
#include "parser.h"
#include "lexer.h"
#include "ast.h"

#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>
/*
// invoked by driver to create symbol table
hashtable *createSymbolTable(treenode PT, int size);

// prints symbol table in desired formats
void printSymbolTable(hashtable *ht, int size);

// helper function used by typechecker to fetch input parameters of a given function
entry *getInputParameter(hashtable *ht, char *function, int ParameterNumber);
// helper function used by typechecker to fetch output parameters of a given function
entry *getOutputParameter(hashtable *ht, char *function, int ParameterNumber);

// keeps track of symboltable errors like redeclarations
char symboltable_errors[500][500];*/
int error_count;

int symbolerror;

variable createVar(treenode declaration);

variable addToGlobalList(variable list, treenode declaration);
int searchInGlobalList(variable list, char* lex);

//Function to find and add Globla Var to Global Var list.
void findAndInsertGVariables(variable globalVarList, treenode root);

#endif
