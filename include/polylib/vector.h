/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 *
 *   Created: Mon Mar 30 11:33:18 1998
 */
#ifndef _vector_H_ 
#define _vector_H_
#if (defined(__STDC__) || defined(__cplusplus))

#if defined(__cplusplus)
extern "C" {
#endif

Value* value_alloc(int want, int *got);
void value_free(Value *p, int size);

extern void Factorial(int n,Value *result);
extern void Binomial(int n,int p,Value *result);
extern void CNP(int a,int b,Value *result);
extern void Gcd(Value a,Value b,Value *result);
extern int First_Non_Zero(Value *p, unsigned length);
extern Vector *Vector_Alloc(unsigned length);
extern void Vector_Free(Vector *vector);
extern void  Vector_Print(FILE *Dst,char *Format,Vector *Vec);
extern Vector *Vector_Read(void);
extern void Vector_Set(Value *p,int n,unsigned length);
extern void Vector_Exchange(Value *p1, Value *p2, unsigned length);
extern void Vector_Copy(Value *p1, Value *p2, unsigned length);
extern void Vector_Add(Value *p1,Value *p2,Value *p3,unsigned length);
extern void Vector_Sub(Value *p1,Value *p2,Value *p3,unsigned length);
extern void Vector_Or(Value *p1,Value *p2,Value *p3,unsigned length);
extern void Vector_Scale(Value *p1, Value *p2, Value lambda, unsigned
			 length);
extern void Vector_AntiScale(Value *p1,Value *p2,Value lambda,
			                unsigned length);
extern void Inner_Product(Value *p1,Value *p2,unsigned length, Value *result);
extern void Vector_Max(Value *p,unsigned length, Value *result);
extern void Vector_Min(Value *p,unsigned length, Value *result);
extern void Vector_Combine(Value *p1,Value *p2,Value *p3,Value
                            lambda, Value mu, unsigned length);
extern int  Vector_Equal(Value *Vec1,Value *Vec2,unsigned n);
extern void Vector_Min_Not_Zero(Value *p,unsigned length,int *index,Value
                     *result);
extern void Vector_Gcd(Value *p,unsigned length,Value *result);
extern void Vector_Map(Value *p1,Value *p2,Value *p3,unsigned
		       length, Value *(*f)());
extern void Vector_Normalize(Value *p,unsigned length);
extern void Vector_Normalize_Positive(Value *p,int length,
				      int pos);
extern void Vector_Reduce(Value *p,unsigned length,
                  void(*f)(Value,Value *),Value *result);
extern void Vector_Sort(Value *vector,unsigned n);

#if defined(__cplusplus)
}
#endif

#else /* (defined(__STDC__) || defined(__cplusplus)) */

extern void Factorial(/*int n,Value *result*/);
extern void Binomial(/*int n,int p,Value *result*/);
extern void CNP(/*int a,int b,Value *result*/);
extern void Gcd(/*Value a,Value b,Value *result*/);
extern int First_Non_Zero(/*Value *p, unsigned length*/);
extern Vector *Vector_Alloc(/*unsigned length*/);
extern void Vector_Free(/*Vector *vector*/);
extern void  Vector_Print(/*FILE *Dst,char *Format,Vector *Vec*/);
extern Vector *Vector_Read(/*void*/);
extern void Vector_Set(/*Value *p,int n,unsigned length*/);
extern void Vector_Exchange(/*Value *p1, Value *p2, unsigned length*/);
extern void Vector_Copy(/*Value *p1, Value *p2, unsigned length*/);
extern void Vector_Add(/*Value *p1,Value *p2,Value *p3,unsigned length*/);
extern void Vector_Sub(/*Value *p1,Value *p2,Value *p3,unsigned length*/);
extern void Vector_Or(/*Value *p1,Value *p2,Value *p3,unsigned length*/);
extern void Vector_Scale(/*Value *p1, Value *p2, Value lambda, unsigned
			 length*/);
extern void Vector_AntiScale(/*Value *p1,Value *p2,Value lambda,
			     unsigned length*/);
extern void Inner_Product(/*Value *p1,Value *p2,unsigned length, Value *result*/);
extern void Vector_Max(/*Value *p,unsigned length, Value *result*/);
extern void Vector_Min(/*Value *p,unsigned length, Value *result*/);
extern void Vector_Combine(/*Value *p1,Value *p2,Value *p3,Value
                            lambda, Value mu, unsigned length*/);
extern int  Vector_Equal(/*Value *Vec1,Value *Vec2,unsigned n*/);
extern void Vector_Min_Not_Zero(/*Value *p,unsigned length,int *index,Value
          *result*/);
extern void Vector_Gcd(/*Value *p,unsigned length,Value *result*/);
extern void Vector_Map(/*Value *p1,Value *p2,Value *p3,unsigned
		       length, Value *(*f)()*/);
extern void Vector_Normalize(/*Value *p,unsigned length*/);
extern void Vector_Normalize_Positive(/*Value *p,int length,
				      int pos*/);
extern void Vector_Reduce(/*Value *p,unsigned length,
                   void(*f)(Value,Value *),Value *result*/);
extern void Vector_Sort(/*Value *vector,unsigned n*/);


#endif /* (defined(__STDC__) || defined(__cplusplus)) */
#endif /* _vector_H_ */








