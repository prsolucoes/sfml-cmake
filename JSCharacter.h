#ifndef JSCHARACTER_H
#define JSCHARACTER_H

#include "v8wrap.h"
#include "Character.h"

class JSCharacter : public v8wrap::V8ClassTemplate<JSCharacter, Character>
{

public:
    static const char *Bases;
    static const char *ClassName;
    static v8::Handle<v8::Value> Create(const v8::Arguments &args);
    static void Delete(MyClass *inst);
    static void InitPOT(v8::Handle<v8::ObjectTemplate> target);
    static void InitPFT(v8::Handle<v8::ObjectTemplate> target);
    static void Register(v8::Handle<v8::FunctionTemplate> target);
    static void Register(v8::Handle<v8::ObjectTemplate> target);

private:
    static v8::Handle<v8::Value> Object_copy(const v8::Arguments &args);
    static v8::Handle<v8::Value> Object_delete(const v8::Arguments &args);

};

#endif // JSCHARACTER_H