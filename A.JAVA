import java.io.*;
import java.util.*;
class A
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("enter a string");
String str=sc.nextLine();
String str1="";
for(int i=0;i<str.length();i++)
{
char ch=str.charAt(i);
if(i%2==0)
ch=Character.toUpperCase(ch);
str1=str1+ch;
}
System.out.println("new string is:"+str1);
}
}

