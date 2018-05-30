import java.util.*;
class B
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("enter a string");
String str=sc.nextLine();
String str1="";
int i,count;
for(;str.length()>0;str=str1)
{
for(i=0,count=0,str1="";i<str.length();i++)
if(str.charAt(0)==str.charAt(i))
{
count++;
}
else
{
str1=str1+str.charAt(i);
}
System.out.println(str.charAt(0)+"="+count);
}
}
}