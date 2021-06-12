class Geeks{

static void follPatt(String s)
{

//Your code here
        while (s.length() != (s = s.replaceAll("xy", "")).length());
        if(s.length()!=0)
        {
        System.out.println(0);
        }
        else
        {
        System.out.println(1);
        }
        
        // System.out.println();
        }
}