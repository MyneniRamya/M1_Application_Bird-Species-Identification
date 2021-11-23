#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Method Declaration

void size();
void name();
void width();
void Height();
void accuracy();

void setcolor(int ForgC)
{ 

    WORD wColor;
    HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

if(GetConsoleScreenBufferInfo(hStdOut,&csbi))

{
	wColor=(csbi.wAttributes & 0xB0)+(ForgC & 0x0B);
//	SetConsoleTextAttributes(hStdOut,wColor);
	SetConsoleTextAttribute(hStdOut,wColor);
	
}
}

int main()

{    
     // MAIN FUNCTION	
	
    int i=0;
	int k=5;
	time_t t;
	date_d;
    dataset='cub_200';

	system("cls");   // FOR CLEARING SCREEN
	printf(" \n");
	printf("BIRD SPECIES IDENTIFICATION");                                                                     
	printf("labels");                
	printf("train.shape");
    printf("val.shape");
    printf("accuracy");

   for i in range(k)   
   {

   printf("distance:"+str(dis[0,i]));
   }

void upload()
{

    filename;
    filename=askopenfilename(intialdir="Bird images");
    if(filename=filename("output")
		exit(0)
    else

     filename("output")
}

void scoregraph()
{

    height;
    height=("sim1,tan");
    heitht=("cosine similarity");
    show()
}

void DFNN()
{

    name;
    name=("os.path.basename"(filename));
    arr=name.split("");
    kdt=kdt(feature_train,leaf);
    printf("query image from validation set:");
} 

void add()
{

    Time;
    tic=time.time("");
    LR.fit("feature train,labels train");
    labels=labels("LR.predict(future val))");
}

  for in range(len(lables val))
{

    printf("Accuracy");
    printf("elapsed time");
}

void title()
{
    
    font=("time",20,"bold");
    title=label(main,text="bird species identification");
    title.config(bg="white",fg="red");
    title.config(font=font);
    title.config(height=3,width=80);
    title.place(x=5,y=5);
}

void path()
{

    pathlabel=label(main);
    pathlabel.config(bg="white",fg="red");
    pathlabel.cofig(font=font);
    pathlabel.place(x=300,y=100);
}

void search()
{
    
    system("cls");
	FILE *f;

	int flag=1;

	f=fopen("add.txt","r+");

	if(f==0)

		exit(0);

	fflush(stdin);

	printf("Bird species identification: \n");

	while(fread(&s,sizeof(s),1,f)==1)
	{

			printf("features train.shape");
			printf("labels train.shape");
			printf("feature val.shape");
			printf("labels val.shape");

		}
	}

void result()
{

    viewresults=button(main,text="view score graph",command=scoregraph);
    viewresults.place(x=50,y=200);
    viewresults.config(font=font);
    main.config(bg="white");
    main.mainloop();
}
	
}
