#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
typedef struct __save__
{
    char temp[30];
}save;
typedef struct __news__
{
    char titel[100];
    char content[1000];
    char end_date[10];
}news;
typedef struct __meal__
{
    char id_self[20];
    char date[20];
    char type[20];
    char food_id[20];
    int count;
}meal;
typedef struct __self__
{
    char id_self[20];
    char name_self[20];
    char location_of_self[20];
    int capacity;
    char gender_self[10];
    char meal[10];
    char start_lunch[6];
    char end_lunch[6];
    char start_dinner[6];
    char end_dinner[6];
}self;
typedef struct student
{
    char name[100];
    char family[20];
    char user_id[20];
    char password[20];
    char national_id_code[21];
    char gender[10];
    char tavalod[21];
    char type[7];
    long long int charge;
    int check;
}student;
typedef struct __food__
{
    char id_food[20];
    char name_food[20];
    char type_food[20];
    long long int price;
}food;
void define_meal()
{
    system("cls");
    meal *temp = (meal*)malloc(1000 * sizeof(meal));
    printf("\t\tplease enter id of self\n");
    scanf("%s" , temp[0].id_self);
    char t[100];
    for (int i = 0; i < strlen(temp[0].id_self); i++)
        t[i] = temp[0].id_self[i];
    int ind = strlen(temp[0].id_self);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    FILE *fptr;
    fptr = fopen(t,"r");
    if(fptr == NULL){
        printf("\t\tnot-found");
        menu_admin();
        }
    fclose(fptr);
    printf("\t\tplease enter date\n");
    scanf("%s" , temp[0].date);
    printf("\t\tplease enter type of meal\n");
    scanf("%s" ,temp[0].type);
    printf("\t\tplease enter id of food\n");
    scanf("%s" ,temp[0].food_id);
    char y[100];
    for (int i = 0; i < strlen(temp[0].food_id); i++)
        y[i] = temp[0].food_id[i];
    ind = strlen(temp[0].food_id);
    y[ind++] = '.';
    y[ind++] = 't';
    y[ind++] = 'x';
    y[ind++] = 't';
    y[ind] = '\0';
    FILE *hptr;
    hptr = fopen(y,"r");
    if(hptr == NULL){
        printf("\t\tnot-found");
        menu_admin();
        }
    fclose(hptr);
    printf("\t\tnumber of food\n");
    scanf("%d" , &temp[0].count);
    char c[100];
    for(int i = 0; i < strlen(temp[0].id_self);i++)
            c[i] = temp[0].id_self[i];
    ind =  strlen(temp[0].id_self);
    c[ind++] = '(';
    for(int i = ind ;i < strlen(temp[0].date) + ind;i++)
        c[i] = temp[0].date[i - ind];
    ind = strlen(temp[0].date) + ind;
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *kptr;
    kptr = fopen(c, "w");
    fprintf(kptr,"%s %s %s %s %d",temp[0].id_self,temp[0].date,temp[0].type,temp[0].food_id,temp[0].count);
    fclose(kptr);
    system("cls");
    free(temp);
    printf("\t\tthe meal is defined\n");
    menu_admin();
}
void charge_account(char username[],int n)
{
    system("cls");
    student *temp = (student*)malloc(1000 * sizeof(student));
    char t[100];
    for (int i = 0; i < strlen(username); i++)
        t[i] = username[i];
    int ind = strlen(username);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    FILE *fptr;
    fptr = fopen(t,"r+");
    fscanf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,&temp[0].check,&temp[0].charge);
    fclose(fptr);
    long long int _money_;
    printf("\t\thow much do you charge your account?\n");
    scanf("%lld" , &_money_);
    temp[0].charge += _money_;
    FILE *hptr;
    hptr = fopen(t , "w");
    fprintf(hptr,"%s %s %s %s %s %s %s %s %lld %lld",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,temp[0].check,temp[0].charge);
    fclose(hptr);
    char shomare_kard[30];
    printf("\t\tplease enter your card number\n");
    scanf("%s" , shomare_kard);
    char ramz_kard[30];
    printf("\t\tplease enter your card code\n");
    scanf("%s" , ramz_kard);
    system("cls");
    char c[100];
    for (int i = 0; i < strlen(username); i++)
        c[i] = username[i];
    ind = strlen(username);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *kptr;
    kptr = fopen(c,"a");
    fprintf(kptr,"\nthis user charged his account with %d toman",_money_);
    fclose(kptr);
    ind -= 4;
    c[ind++] = '-';
    c[ind++] = 'm';
    c[ind++] = 'o';
    c[ind++] = 'n';
    c[ind++] = 'e';
    c[ind++] = 'y';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *wptr;
    wptr = fopen(c,"a");
    fprintf(wptr,"this user charged his account with %d toman",_money_);
    fclose(wptr);
    printf("\t\tyour account has been successfully charged\n\n");
    free(temp);
    menu_student();
}
void define_food()
{
    system("cls");
    food *temp = (food*)malloc(1000 * sizeof(food));
    printf("\t\tplease enter id of food\n");
    scanf("%s" , temp[0].id_food);
    printf("\t\tplease enter name of food\n");
    scanf("%s" , temp[0].name_food);
    printf("\t\tplease enter type of food\n");
    scanf("%s" , temp[0].type_food);
    printf("\t\tplease enter price of food\n");
    scanf("%lld" , &temp[0].price);
    char t[100];
    for (int i = 0; i < strlen(temp[0].id_food); i++)
        t[i] = temp[0].id_food[i];
    int ind = strlen(temp[0].id_food);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    FILE *fptr;
    fptr = fopen(t,"a+");
    fprintf(fptr,"%s %s %s %lld" ,temp[0].id_food,temp[0].name_food,temp[0].type_food,temp[0].price);
    fclose(fptr);
    system("cls");
    printf("\t\tfood defined successfully\n");
    free(temp);
    menu_admin();
}
void define_self()
{
    system("cls");
    self *temp = (self*)malloc(1000 * sizeof(self));
    printf("\t\tplease enter id of self\n");
    scanf("%s" , temp[0].id_self);
    printf("\t\tplease enter name of self\n");
    scanf("%s" , temp[0].name_self);
    printf("\t\tplease enter address of self\n");
    scanf("%s" , temp[0].location_of_self);
    printf("\t\tplease enter Capacity of self\n");
    scanf("%d" , &temp[0].capacity);
    printf("\t\tplease enter gender of self\n");
    scanf("%s" , temp[0].gender_self);
    printf("\t\tplease enter meal of self\n");
    scanf("%s" , temp[0].meal);
    char t[100];
    for (int i = 0; i < strlen(temp[0].id_self); i++)
        t[i] = temp[0].id_self[i];
    int ind = strlen(temp[0].id_self);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    FILE *fptr;
    fptr = fopen(t,"a+");
    if(strcmp("both" , temp[0].meal) == 0)
    {
        printf("\t\tplease enter star of lunch time\n");
        scanf("%s" , temp[0].start_lunch);
        printf("\t\tplease enter end of lunch time\n");
        scanf("%s" , temp[0].end_lunch);
        printf("\t\tplease enter star of dinner time\n");
        scanf("%s" , temp[0].start_dinner);
        printf("\t\tplease enter end of dinner time\n");
        scanf("%s" , temp[0].end_dinner);
        fprintf(fptr,"%s %s %s %d %s %s %s %s %s %s",temp[0].id_self,temp[0].name_self,temp[0].location_of_self,temp[0].capacity,temp[0].gender_self,temp[0].meal,temp[0].start_lunch,temp[0].end_lunch,temp[0].start_dinner,temp[0].end_dinner);
        fclose(fptr);
    }
    else if(strcmp("lunch" , temp[0].meal) == 0)
    {
        printf("\t\tplease enter star of lunch time\n");
        scanf("%s" , temp[0].start_lunch);
        printf("\t\tplease enter end of lunch time\n");
        scanf("%s" , temp[0].end_lunch);
        fprintf(fptr,"%s %s %s %d %s %s %s %s",temp[0].id_self,temp[0].name_self,temp[0].location_of_self,temp[0].capacity,temp[0].gender_self,temp[0].meal,temp[0].start_lunch,temp[0].end_lunch);
        fclose(fptr);
    }
    else
    {
        printf("\t\tplease enter star of dinner time\n");
        scanf("%s" , temp[0].start_dinner);
        printf("\t\tplease enter end of dinner time\n");
        scanf("%s" , temp[0].end_dinner);
        fprintf(fptr,"%s %s %s %d %s %s %s %s",temp[0].id_self,temp[0].name_self,temp[0].location_of_self,temp[0].capacity,temp[0].gender_self,temp[0].meal,temp[0].start_dinner,temp[0].end_dinner);
        fclose(fptr);
    }
    free(temp);
    system("cls");
    printf("\t\tthe self is defined\n");
    menu_admin();
}
void check_news(char username[] , int n)
{
    system("cls");
    char buff[100];
    FILE *fptr;
    fptr = fopen("news.txt","r");
    while(!feof(fptr))
    {
        fgets(buff ,100,fptr);
        puts(buff);
    }
    char t[100];
    for (int i = 0; i < strlen(username); i++)
        t[i] = username[i];
    int ind = strlen(username);
    t[ind++] = '-';
    t[ind++] = 'r';
    t[ind++] = 'e';
    t[ind++] = 'p';
    t[ind++] = 'o';
    t[ind++] = 'r';
    t[ind++] = 't';
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    FILE *hptr;
    hptr = fopen(t,"a");
    fprintf(hptr,"\nthis user checked the news");
    fclose(hptr);
    printf("\t\tdo you want to return to the menu\n\t\t1.yes\n\t\t2.no\n");
    int choice;
    scanf("%d" , &choice);
    if(choice == 1){
         system("cls");
        menu_student();
        }
    else
    {
        check_news(username , n);
    }
}
void add_news()
{
    system("cls");
    char buff[200];
    news *temp = (news*)malloc(1000 *sizeof(news));
    printf("\t\tplease enter titel of news\n");
    getchar();
    gets(buff);
    //puts(buff);
    strcpy(temp[0].titel,buff);
    printf("\t\tplease enter content of news\n");
    //getchar();
    gets(buff);
    strcpy(temp[0].content,buff);
    printf("\t\tHow long will this news be shown?\n");
    //getchar();
    gets(buff);
    strcpy(temp[0].end_date,buff);
    FILE *fptr;
    fptr = fopen("news.txt","a+");
    fprintf(fptr,"%s\n%s\n%s\n--------\n",temp[0].titel,temp[0].content,temp[0].end_date);
    fclose(fptr);
    free(temp);
    system("cls");
    printf("\t\tthe news added\n");
    menu_admin();
}
void reserved_plan()
{

}
void take_food(char username[],int n)
{
    system("cls");
    char self_id[20];
    printf("\t\tplease enter id of self\n");
    scanf("%s" , self_id);
    char _date_[11];
    printf("\t\tplease enter time\n");
    scanf("%s" , _date_);
    char c[100];
    for(int i = 0; i < strlen(self_id);i++)
            c[i] = self_id[i];
    int ind =  strlen(self_id);
    c[ind++] = '(';
    for(int i = ind ;i < strlen(_date_) + ind;i++)
        c[i] = _date_[i - ind];
    ind = strlen(_date_) + ind;
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    char t[20];
    for(int i = 0 ; i < strlen(username);i++)
        t[i] = username[i];
    int m = strlen(username);
    t[m++] = ' ';
    t[m++] = '1';
    t[m] = '\0';
    save *head = (save*)malloc(1000 * sizeof(save));
    FILE *fptr;
    fptr = fopen(c,"r");
    if(fptr == NULL)
    {
        printf("\t\twrong id or date,pleas try again\n");
        take_food(username , n);
    }
    int i = 0;
    int hold = 0;
    char a[20];
    while(!feof(fptr))
    {
        fgets(head[i].temp,30,fptr);
        for(int l = 0 ; l < 8;l++)
        a[l] = head[i].temp[l];
        int p = 8;
        a[p++] = ' ';
        a[p++] = '1';
        a[p] = '\0';
        if(strcmp(a,t) == 0)
        {
            if(head[i].temp[9] == '0')
            {
                printf("\t\tyou have already received the food\n");
                menu_student();
            }
            else{
                head[i].temp[9] = '0';
                hold = 1;
            }
        }
        i++;
    }
    fclose(fptr);
    if(hold == 0)
    {
        printf("you have not made a reservation in this restaurant");
        menu_student(username,n);
    }
    FILE *hptr;
    hptr = fopen(c,"w");
    fprintf(hptr,"%s",head[0].temp);
    fclose(hptr);
    FILE *kptr;
    kptr = fopen(c,"a");
    for(int m = 1;m < i;m++)
    {
        fprintf(kptr,"\n%s" ,head[m].temp);
    }
    fclose(kptr);
    free(head);
    system("cls");
    printf("\t\tthe food delivery operation was completed successfully\n");
    char b[100];
    for (int i = 0; i < strlen(username); i++)
        b[i] = username[i];
    ind = strlen(username);
    b[ind++] = '-';
    b[ind++] = 'r';
    b[ind++] = 'e';
    b[ind++] = 'p';
    b[ind++] = 'o';
    b[ind++] = 'r';
    b[ind++] = 't';
    b[ind++] = '.';
    b[ind++] = 't';
    b[ind++] = 'x';
    b[ind++] = 't';
    b[ind] = '\0';
    FILE *wptr;
    wptr = fopen(b,"a");
    fprintf(wptr,"\nthis user received food from self %s on %s",self_id,_date_);
    fclose(wptr);
    ind -= 4;
    b[ind++] = '-';
    b[ind++] = 't';
    b[ind++] = 'a';
    b[ind++] = 'k';
    b[ind++] = 'e';
    b[ind++] = '.';
    b[ind++] = 't';
    b[ind++] = 'x';
    b[ind++] = 't';
    b[ind] = '\0';
    FILE *sptr;
    sptr = fopen(b,"a");
    fprintf(sptr,"\nthis user received food from self %s on %s",self_id,_date_);
    fclose(sptr);
    menu_student();
}
void reserve(char username[],int n)
{
    system("cls");
    char self_id[20];
    printf("\t\tplease enter id of self\n");
    scanf("%s" , self_id);
    char t[50];
    for (int i = 0; i < strlen(self_id); i++)
        t[i] = self_id[i];
    int ind = strlen(self_id);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    meal *temp = (meal*)malloc(1000 * sizeof(meal));
    FILE *fptr;
    fptr = fopen(t,"r");
    if(fptr == NULL)
    {
        printf("\t\twrong id,please try again\n");
        reserve(username , n);
    }
    fclose(fptr);
    char _date_[10];
    printf("\t\twhen do you want to make a reservation?\n");
    scanf("%s" , _date_);
    char c[100];
    for(int i = 0; i < strlen(self_id);i++)
            c[i] = self_id[i];
    ind =  strlen(self_id);
    c[ind++] = '(';
    for(int i = ind ;i < strlen(_date_) + ind;i++)
        c[i] = _date_[i - ind];
    ind = strlen(_date_) + ind;
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *hptr;
    hptr = fopen(c,"r");
    if(hptr == NULL){
        system("cls");
        printf("\t\tfood will not be served on this date in this self\n");
        menu_student();
    }
    fscanf(hptr,"%s %s %s %s %d",temp[0].id_self,temp[0].date,temp[0].type,temp[0].food_id,&temp[0].count);
    fclose(hptr);
    student *head = (student*)malloc(1000 * sizeof(student));
    char m[100];
    for (int i = 0; i < strlen(username); i++)
        m[i] = username[i];
    int b = strlen(username);
    m[b++] = '.';
    m[b++] = 't';
    m[b++] = 'x';
    m[b++] = 't';
    m[b] = '\0';
    FILE *sptr;
    sptr = fopen(m,"r");
    fscanf(sptr,"%s %s %s %s %s %s %s %s %d %d",&head[0].name,&head[0].family,&head[0].user_id,&head[0].password,&head[0].national_id_code,&head[0].gender,&head[0].tavalod,&head[0].type,&head[0].check,&head[0].charge);
    fclose(sptr);
    char l[100];
    for (int i = 0; i < strlen(temp[0].food_id); i++)
        l[i] = temp[0].food_id[i];
    int z = strlen(temp[0].food_id);
    l[z++] = '.';
    l[z++] = 't';
    l[z++] = 'x';
    l[z++] = 't';
    l[z] = '\0';
    food *curr = (food*)malloc(1000 * sizeof(food));
    FILE *mptr;
    mptr = fopen(l,"r");
    fscanf(mptr,"%s %s %s %lld" ,curr[0].id_food,curr[0].name_food,curr[0].type_food,&curr[0].price);
    fclose(mptr);
    if(curr[0].price <= head[0].charge)
    {
    int delivery = 1;
    FILE *kptr;
    kptr = fopen(c,"a+");
    fprintf(kptr ,"\n%s %d",head[0].user_id,delivery);
    head[0].charge -= curr[0].price;
    fclose(kptr);
    FILE *wptr;
    wptr = fopen(m,"w");
    fprintf(sptr,"%s %s %s %s %s %s %s %s %d %d",head[0].name,head[0].family,head[0].user_id,head[0].password,head[0].national_id_code,head[0].gender,head[0].tavalod,head[0].type,head[0].check,head[0].charge);
    fclose(wptr);
    system("cls");
    printf("\t\treserved successfully\n");
    char c[100];
    for (int i = 0; i < strlen(username); i++)
        c[i] = username[i];
    ind = strlen(username);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *optr;
    optr = fopen(c,"a");
    fprintf(optr,"\nthis account reserved food");
    fclose(optr);
    ind -= 4;
    c[ind++] = '-';
    c[ind++] = 'm';
    c[ind++] = 'o';
    c[ind++] = 'n';
    c[ind++] = 'e';
    c[ind++] = 'y';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *sptr;
    sptr = fopen(c,"a");
    fprintf(sptr,"this user reserved food for %d toman\n",curr[0].price);
    fclose(sptr);
    free(temp);
    free(head);
    free(curr);
    menu_student();
    }
    else
    {
        system("cls");
        printf("\t\tthere is not enough balance in your account\n");
        free(temp);
        free(head);
        free(curr);
        menu_student();
    }

}
void send_charge(char username[],int n)
{
    system("cls");
    student *temp = (student*)malloc(1000 * sizeof(student));
    char username1[20];
    printf("\t\tplease enter the id of the destination account\n");
    scanf("%s" , username1);
    char t[50];
    for (int i = 0; i < strlen(username1); i++)
        t[i] = username1[i];
    int ind = strlen(username1);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    FILE *fptr;
    fptr = fopen(t,"r");
    if(fptr == NULL)
    {
        printf("\n\twrong id,please try again\n");
        free(temp);
        send_charge(username , n);
    }
    else
    {
        fscanf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,&temp[0].check,&temp[0].charge);
        printf("\n\t\tname:%s\n\t\tsure name:%s\n\t\tid:%s\n" ,temp[0].name,temp[0].family,temp[0].user_id);
        fclose(fptr);
    }
    student *head = (student*)malloc(1000 * sizeof(student));
    char c[100];
    for (int i = 0; i < strlen(username); i++)
        c[i] = username[i];
    int b = strlen(username);
    c[b++] = '.';
    c[b++] = 't';
    c[b++] = 'x';
    c[b++] = 't';
    c[b] = '\0';
    FILE *hptr;
    hptr = fopen(c,"r+");
    fscanf(hptr,"%s %s %s %s %s %s %s %s %d %d",head[0].name,head[0].family,head[0].user_id,head[0].password,head[0].national_id_code,head[0].gender,head[0].tavalod,head[0].type,&head[0].check,&head[0].charge);
    fclose(hptr);
    long long int _money_;
    printf("\t\thow much charge do you want to send to this account\n");
    scanf("%lld",&_money_);
    if(head[0].charge < _money_)
    {
        system("cls");
        free(temp);
        free(head);
        printf("\t\tthere is not enough balance in your account\n");
        menu_student();
    }
    else
    {
    temp[0].charge += _money_;
    head[0].charge -= _money_;
    FILE *kptr;
    kptr = fopen(c,"w");
    fprintf(kptr,"%s %s %s %s %s %s %s %s %d %d",head[0].name,head[0].family,head[0].user_id,head[0].password,head[0].national_id_code,head[0].gender,head[0].tavalod,head[0].type,head[0].check,head[0].charge);
    fclose(kptr);
    FILE *aptr;
    aptr = fopen(t, "w");
    fprintf(aptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,temp[0].check,temp[0].charge);
    fclose(hptr);
    system("cls");
    printf("\t\tdone successfully\n");
    char z[100];
    for (int i = 0; i < strlen(username); i++)
        z[i] = username[i];
    ind = strlen(username);
    z[ind++] = '-';
    z[ind++] = 'r';
    z[ind++] = 'e';
    z[ind++] = 'p';
    z[ind++] = 'o';
    z[ind++] = 'r';
    z[ind++] = 't';
    z[ind++] = '.';
    z[ind++] = 't';
    z[ind++] = 'x';
    z[ind++] = 't';
    z[ind] = '\0';
    FILE *wptr;
    wptr = fopen(z,"a");
    fprintf(wptr,"\nthis account sent %lld charge for %s" ,_money_ ,username1);
    fclose(wptr);
    ind -= 4;
    z[ind++] = '-';
    z[ind++] = 'm';
    z[ind++] = 'o';
    z[ind++] = 'n';
    z[ind++] = 'e';
    z[ind++] = 'y';
    z[ind++] = '.';
    z[ind++] = 't';
    z[ind++] = 'x';
    z[ind++] = 't';
    z[ind] = '\0';
    FILE *sptr;
    sptr = fopen(z,"a");
    printf(sptr,"\nthis account sent %lld charge for %s" ,_money_ ,username1);
    fclose(sptr);
    free(temp);
    free(head);
    menu_student();
    }
}

void sign_up()
{
    student *head = (student*)malloc(1000 * sizeof(student));
    printf("\t\tplease enter your name\n");
    scanf("%s" , head[0].name);
    printf("\t\tplease enter your sure name\n");
    scanf("%s" , head[0].family);
    printf("\t\tplease enter your id\n");
    scanf("%s" , head[0].user_id);
    printf("\t\tplease enter your password\n");
    scanf("%s" , head[0].password);
    printf("\t\tplease enter your national-id-code\n");
    scanf("%s" , head[0].national_id_code);
    printf("\t\tplease enter your gender\n");
    scanf("%s" , head[0].gender);
    printf("\t\tplease enter your birthday\n");
    scanf("%s" , head[0].tavalod);
    printf("\t\tplease enter your type\n");
    scanf("%s" , head[0].type);
    head[0].check = 0;
    head[0].charge = 0;
    FILE *fptr;
    char t[100];
    for (int i = 0; i < strlen(head[0].user_id); i++)
        t[i] = head[0].user_id[i];
    int ind = strlen(head[0].user_id);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    fptr = fopen(t,"a+");
    fprintf(fptr,"%s %s %s %s %s %s %s %s %d %d",head[0].name,head[0].family,head[0].user_id,head[0].password,head[0].national_id_code,head[0].gender,head[0].tavalod,head[0].type,head[0].check,head[0].charge);
    fclose(fptr);
    ind = strlen(head[0].user_id);
    t[ind++] = '-';
    t[ind++] = 'r';
    t[ind++] = 'e';
    t[ind++] = 'p';
    t[ind++] = 'o';
    t[ind++] = 'r';
    t[ind++] = 't';
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    FILE *hptr;
    hptr = fopen(t,"w");
    fprintf(hptr,"this user has registered on the site");
    fclose(hptr);
    ind -= 4;
    t[ind++] = '-';
    t[ind++] = 'm';
    t[ind++] = 'o';
    t[ind++] = 'n';
    t[ind++] = 'e';
    t[ind++] = 'y';
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    FILE *kptr;
    kptr = fopen(t,"a");
    fclose(kptr);
    printf("\t\tnow you have to wait for the administrator's approval\n");
    free(head);
    vorod_be_samane();
}
void charge_student_account()
{
    system("cls");
    char username[20];
    printf("\t\tplease enter user name\n");
    scanf("%s", username);
    char t[100];
    for (int i = 0; i < strlen(username); i++)
        t[i] = username[i];
    int ind = strlen(username);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    student *temp = (student*)malloc(1000 * sizeof(student));
    FILE *fptr;
    fptr = fopen(t,"r");
    if(fptr == NULL)
    {
        printf("\n\twrong id,please try again\n");
        charge_student_account();
    }
    else
    {
        fscanf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,&temp[0].check,&temp[0].charge);
        fclose(fptr);
    }
    long long int _charge_;
    printf("How much do you want to charge the account\n");
    scanf("%lld" ,&_charge_);
    temp[0].charge += _charge_;
    FILE *hptr;
    hptr = fopen(t,"w+");
    fprintf(fptr,"%s %s %s %s %s %s %s %s %d %lld",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,temp[0].check,temp[0].charge);
    fclose(hptr);
    system("cls");
    printf("\t\tthe account has been charged successfully\n");
    char c[100];
    for (int i = 0; i < strlen(username); i++)
        c[i] = username[i];
    ind = strlen(username);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *kptr;
    kptr = fopen(c,"a");
    fprintf(kptr,"\nthis account was charged %lld by admin",_charge_);
    free(temp);
    fclose(kptr);
    menu_admin();
}
void change_student_pass()
{
    system("cls");
    char user[20];
    printf("\n\tenter user-id\n");
    scanf("%s" , user);
    char t[100];
    for (int i = 0; i < strlen(user); i++)
        t[i] = user[i];
    int ind = strlen(user);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    student *temp = (student*)malloc(1000 * sizeof(student));
    FILE *fptr;
    fptr = fopen(t,"r");
    if(fptr == NULL)
    {
        printf("\n\twrong id,please try again\n");
        change_student_pass();
    }
    else
    {
        fscanf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,&temp[0].check,&temp[0].charge);
    }
    fclose(fptr);
    char new_stud_pass[20];
    printf("\n\tpleas enter new password\n");
    scanf("%s" , new_stud_pass);
    strcpy(temp[0].password,new_stud_pass);
    FILE *hptr;
    hptr = fopen(t , "w");
    fprintf(fptr,"%s %s %s %s %s %s %s %s %lld %lld",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,temp[0].check,temp[0].charge);
    system("cls");
    printf("\t\t%s %s's password has been successfully changed\n",temp[0].name,temp[0].family);
    fclose(hptr);
    char c[100];
    for (int i = 0; i < strlen(user); i++)
        c[i] = user[i];
    ind = strlen(user);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *kptr;
    kptr = fopen(c,"a");
    fprintf(kptr,"\nthe users's password was changed by the admin");
    fclose(kptr);
    free(temp);
    menu_admin();
}
void information_of_food_reservation_and_delivery()
{
    system("cls");
    char self_id[20];
    printf("\t\tplease enter id of self\n");
    scanf("%s" , self_id);
    char _date_[11];
    printf("\t\tplease enter time\n");
    scanf("%s" , _date_);
    char c[100];
    for(int i = 0; i < strlen(self_id);i++)
            c[i] = self_id[i];
    int ind =  strlen(self_id);
    c[ind++] = '(';
    for(int i = ind ;i < strlen(_date_) + ind;i++)
        c[i] = _date_[i - ind];
    ind = strlen(_date_) + ind;
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    char buff[100];
    int count_reserve =0;
    int count_delivery =0;
    FILE *fptr;
    fptr = fopen(c,"r");
    while(!feof(fptr))
    {
        fgets(buff,100,fptr);
        if(buff[9] == 0)
        {
            count_delivery++;
        }
        count_reserve++;
    }
    fclose(fptr);
    printf("\t\tthe number of peoplew ho have reserved food: %d\n\t\tthe number of peoplew ho have recived food: %d",count_reserve,count_delivery);
    printf("\t\tdo you want return to menu\n\t\t1.yes\n\t\t2.no\n");
    int choice;
    scanf("%d" ,&choice);
    if(choice == 1)
    {
        system("cls");
        menu_admin();
    }
    else{
        information_of_food_reservation_and_delivery();
    }
}
void change_password(char username1[] , int n)
{
    system("cls");
    char t[100];
    for (int i = 0; i < strlen(username1); i++)
        t[i] = username1[i];
    int ind = strlen(username1);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    student *temp = (student*)malloc(1000 * sizeof(student));
    char password[20];
    printf("\n\tplease enter your password\n");
    scanf("%s" , password);
    FILE *fptr;
    fptr = fopen(t,"r");
    if(fptr == NULL)
    {
        printf("\t\twrong id\n");
    }
    fscanf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,&temp[0].check,&temp[0].charge);
    fclose(fptr);
    if(strcmp(password,temp[0].password) == 0)
    {
        char password_new[20];
        printf("\n\tplease enter your new password\n");
        scanf("%s" ,password_new);
        strcpy(temp[0].password,password_new);
        FILE *hptr;
        hptr = fopen(t , "w");
        fprintf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,temp[0].check,temp[0].charge);
        fclose(hptr);
    }
    char c[100];
    for (int i = 0; i < strlen(username1); i++)
        c[i] = username1[i];
    ind = strlen(username1);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *kptr;
    kptr = fopen(c,"a");
    fprintf(kptr,"\nthe user changed his/her password");
    fclose(kptr);
    system("cls");
    printf("\t\tyour password has been successfully changed\n");
    free(temp);
    menu_student();
}
void logout(char input_username[],int n)
{
    char c[100];
    for (int i = 0; i < strlen(input_username); i++)
        c[i] = input_username[i];
    int ind = strlen(input_username);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *fptr;
    fptr = fopen(c,"a");
    fprintf(fptr,"\nthe user logged out of the site");
    fclose(fptr);
    main();
}
void Preparing_a_persons_performance_report()
{
    system("cls");
    char user[20];
    printf("\t\twhose performance report do you want\n");
    scanf("%s" , user);
    char c[100];
    for (int i = 0; i < strlen(user); i++)
        c[i] = user[i];
    int ind = strlen(user);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    char buff[60];
    FILE *kptr;
    kptr = fopen(c,"r");
    while(!feof(kptr))
    {
        fgets(buff , 60,kptr);
        puts(buff);
    }
    printf("\t\tdo you want return to menu\n\t\t1.yes\n\t\t2.no\n");
    int choice;
    scanf("%d" ,&choice);
    if(choice == 1)
    {
        system("cls");
        menu_admin();
    }
    else{
        Preparing_a_persons_performance_report();
    }


}
void deactivate()
{
    system("cls");
    char user[20];
    printf("\n\tenter user-id\n");
    scanf("%s" , user);
    char t[100];
    for (int i = 0; i < strlen(user); i++)
        t[i] = user[i];
    int ind = strlen(user);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    student *temp = (student*)malloc(1000 * sizeof(student));
    FILE *fptr;
    fptr = fopen(t,"r");
    if(fptr == NULL)
    {
        printf("\n\twrong id,please try again\n");
        approve();
    }
    else
    {
        fscanf(fptr,"%s %s %s %s %s %s %s %s %d %d",&temp[0].name,&temp[0].family,&temp[0].user_id,&temp[0].password,&temp[0].national_id_code,&temp[0].gender,&temp[0].tavalod,&temp[0].type,&temp[0].check,&temp[0].charge);
        temp[0].check = 0;
    }
    fclose(fptr);
    FILE *hptr;
    hptr = fopen(t , "w");
    fprintf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,temp[0].check,temp[0].charge);
    system("cls");
    printf("\t\t%s %s became deactive\n",temp[0].name,temp[0].family);
    fclose(hptr);
    char c[100];
    for (int i = 0; i < strlen(user); i++)
        c[i] = user[i];
    ind = strlen(user);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *kptr;
    kptr = fopen(c,"a");
    fprintf(kptr,"\nuser deactived by admin");
    fclose(kptr);
    free(temp);
    menu_admin();
}
void approve()
{
    system("cls");
    char user[20];
    printf("\n\tenter user-id\n");
    scanf("%s" , user);
    char t[100];
    for (int i = 0; i < strlen(user); i++)
        t[i] = user[i];
    int ind = strlen(user);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    student *temp = (student*)malloc(1000 * sizeof(student));
    FILE *fptr;
    fptr = fopen(t,"r");
    if(fptr == NULL)
    {
        printf("\n\twrong id,please try again\n");
        approve();
    }
    else
    {
        fscanf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,&temp[0].check,&temp[0].charge);
        temp[0].check = 1;
    }
    fclose(fptr);
    FILE *hptr;
    hptr = fopen(t , "w");
    fprintf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,temp[0].check,temp[0].charge);
    system("cls");
    printf("\t\t%s %s was approved\n",temp[0].name,temp[0].family);
    fclose(hptr);
    ind = strlen(user);
    t[ind++] = '-';
    t[ind++] = 'r';
    t[ind++] = 'e';
    t[ind++] = 'p';
    t[ind++] = 'o';
    t[ind++] = 'r';
    t[ind++] = 't';
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    FILE *kptr;
    kptr = fopen(t,"a");
    fprintf(kptr,"\nthis user has been approved on the site");
    fclose(kptr);
    free(temp);
    menu_admin();
}
void food_delivery_report(char username[],int n)
{
    system("cls");
    char b[100];
    for (int i = 0; i < strlen(username); i++)
        b[i] = username[i];
    int ind = strlen(username);
    b[ind++] = '-';
    b[ind++] = 'r';
    b[ind++] = 'e';
    b[ind++] = 'p';
    b[ind++] = 'o';
    b[ind++] = 'r';
    b[ind++] = 't';
    b[ind++] = '.';
    b[ind++] = 't';
    b[ind++] = 'x';
    b[ind++] = 't';
    b[ind] = '\0';
    b[ind] = '-';
    b[ind++] = 't';
    b[ind++] = 'a';
    b[ind++] = 'k';
    b[ind++] = 'e';
    b[ind] = '\0';
    char temp[100];
    FILE *fptr;
    fptr = fopen(b,"r");
    while(!feof(fptr))
    {
        fgets(temp,100,fptr);
        printf("\t\t");
        puts(temp);
        printf("\n");
    }
    fclose(fptr);
    printf("\t\tdo you want return to menu\n\t\t1.yes\n\t\t2.no\n");
    int choice;
    scanf("%d" ,&choice);
    if(choice == 1)
    {
        system("cls");
        menu_admin();
    }
    else{
        Preparing_a_persons_performance_report();
    }
}
void remove_student()
{
    system("cls");
    char user[20];
    printf("\n\tenter user-id\n");
    scanf("%s" , user);
    char t[100];
    for (int i = 0; i < strlen(user); i++)
        t[i] = user[i];
    int ind = strlen(user);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    student *temp = (student*)malloc(1000 * sizeof(student));
    FILE *fptr;
    fptr = fopen(t,"r");
    if(fptr == NULL)
    {
        printf("\n\twrong id,please try again\n");
        approve();
    }
    else
    {
        fscanf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,&temp[0].check,&temp[0].charge);
    }
    fclose(fptr);
    temp[0].check = -1;
    FILE *hptr;
    hptr = fopen(t , "w");
    fprintf(fptr,"%s %s %s %s %s %s %s %s %d %d",temp[0].name,temp[0].family,temp[0].user_id,temp[0].password,temp[0].national_id_code,temp[0].gender,temp[0].tavalod,temp[0].type,temp[0].check,temp[0].charge);
    system("cls");
    printf("\t\t%s %s was removed\n",temp[0].name,temp[0].family);
    fclose(hptr);
    char c[100];
    for (int i = 0; i < strlen(user); i++)
        c[i] = user[i];
    ind = strlen(user);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    FILE *kptr;
    kptr = fopen(c,"a");
    fprintf( kptr,"\nthis account was removed by admin");
    fclose(kptr);
    free(temp);
    menu_admin();
}
void financial_reporting(char username[] , int n)
{
    char c[100];
    for (int i = 0; i < strlen(username); i++)
        c[i] = username[i];
    int ind = strlen(username);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '-';
    c[ind++] = 'm';
    c[ind++] = 'o';
    c[ind++] = 'n';
    c[ind++] = 'e';
    c[ind++] = 'y';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    char temp[100];
    FILE *fptr;
    fptr = fopen(c,"r");
    while(!feof(fptr))
    {
        fgets(temp,100,fptr);
        printf("\t\t");
        puts(temp);
        printf("\n");
    }
    fclose(fptr);
    printf("\t\tdo you want return to menu\n\t\t1.yes\n\t\t2.no\n");
    int choice;
    scanf("%d" ,&choice);
    if(choice == 1)
    {
        system("cls");
        menu_admin();
    }
    else{
        Preparing_a_persons_performance_report();
    }

}
void menu_admin(char username[],int n)
{
    int choice;
    printf("\n\t\t1.define-self\n");
    printf("\t\t2.define-food\n");
    printf("\t\t3.define-meal-plan\n");
    printf("\t\t4.charge-student-account\n");
    printf("\t\t5.information of food reservation and delivery\n");
    printf("\t\t6.Preparing a person's performance report\n");
    printf("\t\t7. General System Report\n");
    printf("\t\t8.add-news\n");
    printf("\t\t9.add-poll\n");
    printf("\t\t10.approve\n");
    printf("\t\t11.change password\n");
    printf("\t\t12.change student password\n");
    printf("\t\t13.logout\n");
    printf("\t\t14.deactivate.\n");
    printf("\t\t15.remove-std.\n");
    scanf("%d" , &choice);
    if(choice == 10)
    {
        approve();
    }
    else if(choice == 11)
    {
        change_password(username , n);
    }
    else if(choice == 12)
    {
        change_student_pass();
    }
    else if(choice == 13)
    {
        logout(username , n);
    }
    else if(choice == 14)
    {
        deactivate();
    }
    else if(choice == 15)
    {
        remove_student();
    }
    else if(choice == 1)
    {
        define_self();
    }
    else if(choice == 2)
    {
        define_food();
    }
    else if(choice == 3)
    {
        define_meal();
    }
    else if(choice == 4)
    {
        charge_student_account();
    }
    else if(choice == 8)
    {
        add_news();
    }
    else if(choice == 6)
    {
        Preparing_a_persons_performance_report();
    }
    else if(choice == 5)
    {
        information_of_food_reservation_and_delivery();
    }
}
void menu_student(char username[],int n)
{
    int choice;
    printf("\n\t\t1.reserve\n");
    printf("\t\t2.take-food\n");
    printf("\t\t3.charge-account\n");
    printf("\t\t4.send-charge\n");
    printf("\t\t5.view the reserved plan\n");
    printf("\t\t6.cancel-reserve\n");
    printf("\t\t7.daily reserve\n");
    printf("\t\t8.define-agent\n");
    printf("\t\t9.change-self\n");
    printf("\t\t10.financial-reporting\n");
    printf("\t\t11.food delivery report\n");
    printf("\t\t12.check-news\n");
    printf("\t\t13.vote\n");
    printf("\t\t14.logout\n");
    printf("\t\t15.change password\n");
    scanf("%d" , &choice);
    switch(choice)
    {
    case 15:
        change_password(username , n);
        break;
    case 14:
        logout(username , n);
        break;
    case 3:
        charge_account(username , n);
        break;
    case 4:
        send_charge(username , n);
        break;
    case 1:
        reserve(username,n);
        break;
    case 2:
        take_food(username,n);
        break;
    case 12:
        check_news(username,n);
        break;
    case 11:
        food_delivery_report(username,n);
        break;
    case 10:
        financial_reporting(username,n);
        break;
    }
}
void login()
{
    system("cls");
    char input_username[10];
    char input_password[10];
    printf("\t\tenter your user name\n");
    scanf("%s" , input_username);
    printf("\t\tenter your password\n");
    scanf("%s" , input_password);
    if((strcmp(input_username,"admin") == 0)&&(strcmp(input_password,"admin") == 0))
    {
        printf("\n\tlogin as admin\n");
        system("cls");
        menu_admin(input_username ,strlen(input_username));
    }
    char t[100];
    for (int i = 0; i < strlen(input_username); i++)
        t[i] = input_username[i];
    int ind = strlen(input_username);
    t[ind++] = '.';
    t[ind++] = 't';
    t[ind++] = 'x';
    t[ind++] = 't';
    t[ind] = '\0';
    char c[100];
    for (int i = 0; i < strlen(input_username); i++)
        c[i] = input_username[i];
    ind = strlen(input_username);
    c[ind++] = '-';
    c[ind++] = 'r';
    c[ind++] = 'e';
    c[ind++] = 'p';
    c[ind++] = 'o';
    c[ind++] = 'r';
    c[ind++] = 't';
    c[ind++] = '.';
    c[ind++] = 't';
    c[ind++] = 'x';
    c[ind++] = 't';
    c[ind] = '\0';
    student *temp = (student*)malloc(1000 * sizeof(student));
    FILE *fptr;
    fptr = fopen(t , "r+");
    if(fptr == NULL)
    {
        printf("\n\twrong id,please try again\n");
        login();
    }
    else
    {
        fscanf(fptr,"%s %s %s %s %s %s %s %s %d %d",&temp[0].name,&temp[0].family,&temp[0].user_id,&temp[0].password,&temp[0].national_id_code,&temp[0].gender,&temp[0].tavalod,&temp[0].type,&temp[0].check,&temp[0].charge);
    if(temp[0].check == -1)
    {
        printf("this user deleted");
    }
    else if(strcmp(temp[0].password,input_password) == 0)
        {
            if(strcmp(temp[0].type,"admin") == 0)
            {
                if(temp[0].check == 1)
                {
                    printf("\n\tlogin as admin\n");
                    system("cls");
                    free(temp);
                    FILE *hptr;
                    hptr = fopen(c,"a");
                    fprintf(hptr,"\nthis user login to the site");
                    fclose(hptr);
                    menu_admin(input_username ,strlen(input_username));
                }
                else
                {
                    printf("\n\tnot approved\n");
                }
            }
            else if(strcmp(temp[0].type,"student") == 0)
            {
                if(temp[0].check == 1)
                {
                    printf("\n\tlogin as student\n");
                    system("cls");
                    free(temp);
                    FILE *hptr;
                    hptr = fopen(c,"a");
                    fprintf(hptr,"\nthis user login to the site");
                    fclose(hptr);
                    menu_student(input_username ,strlen(input_username));
                }
                else
                {
                    printf("\n\tnot approved\n");
                }
            }
        }
        else{
            printf("\n\twrong password,please try again\n");
            login();
        }
    }
}
void vorod_be_samane()
{
    system("cls");
    printf("\twelcome to samad\n");
    int choice;
    printf("\t1.login\n");
    printf("\t2.register\n");
    scanf("%d" , &choice);
    if(choice == 1)
    {
        login();
    }
    else if(choice == 2)
    {
        sign_up();
    }
}

int main()
{
    system("cls");
    vorod_be_samane();
    return 0;
}
