import java.io.IOException;
import java.lang.*;
import java.util.Scanner;
import java.util.Stack;
class Main{
    public static void main(String args[])throws IOException {
        Stack<Integer> stack = new Stack<Integer>();
        int test,day,team,h,a,b,t;
        Scanner scan=new Scanner(System.in);
        test=scan.nextInt();
        while(test!=0){
            t=0;
            day=scan.nextInt();
            team=scan.nextInt();
            for(a=6,b=7;a<=day;a=a+7,b=b+7){
                stack.push(a);
                stack.push(b);
                t+=2;
            }
            while(team!=0){
                h=scan.nextInt();
                for(a=h;a<=day;a=a+h){
                    if(!stack.isEmpty()){
                        if(stack.search(a)!=-1){
                            continue;
                        }
                        stack.push(a);
                    }
                }
                team--;
            }
            System.out.println(stack.size()-t);
            stack.clear();
            test--;
        }

    }
}