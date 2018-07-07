#ifndef EXO_1_H_
#define EXO_1_H_

typedef struct s_cthulhu
{
	int m_power;
	char *m_name;
	char legend;
}	t_cthulhu;

typedef struct s_koala
{
	t_cthulhu m_parent;
	char m_isALegend;
}	t_koala;

void PrintPower(t_cthulhu *t);
void Attack(t_cthulhu *t);
void Sleeping(t_cthulhu *t);
t_cthulhu *NewCthulhu();

t_koala* NewKoala(char* name, char _isALegend);
void Eat(t_koala* this);
//static void KoalaInitializer(t_koala* this, char* _name, char _isALegend);
//static void CthulhuInitializer(t_cthulhu* this);

#endif
