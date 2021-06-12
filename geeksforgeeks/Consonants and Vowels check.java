class Geeks{
    
    static void checkString(String s)
    {
        int v=0;
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            char a=s.charAt(i);
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
               v++;
            else if(a==' ')
            continue;
            else c++;
        }
        
        if(v>c)
        System.out.print("Yes");
        else if(c>v)
        System.out.print("No");
        else
       System.out.print("Same");
        
        System.out.println();
    }
}