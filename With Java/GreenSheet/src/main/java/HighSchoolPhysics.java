import java.util.Scanner;

public class HighSchoolPhysics
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextInt())
        {
            int v = sc.nextInt();
            int t = sc.nextInt();

            System.out.println(2 * v * t);
        }

    }
}
