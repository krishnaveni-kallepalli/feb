struct self
{
    char name[20];
    struct self *ptr;
};
int main()
{
    struct self *s;
    s=(struct self*)malloc(sizeof(struct self));
    scanf("%s",s->name);
    printf("Name:%s",s->name);
}
