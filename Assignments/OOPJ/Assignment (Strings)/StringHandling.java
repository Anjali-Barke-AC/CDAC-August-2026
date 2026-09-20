public class StringHandling {

    public static void main(String[] args) {

        String line = "Java Exercise";
        String line2 = "Java Exercises";
        String line3 = "Python";

        System.out.println(line3.charAt(4));
        System.out.println(line.equals(line2));
        System.out.println(line.endsWith(line2));

        String sample = "The quick brown fox jumps over the lazy dog.";
        System.out.println("\nCharacter at every index for String: " + sample);
        for(int i=0; i<sample.length(); i++) {
            System.out.println("Index " + i + " is: " + sample.charAt(i));
        }

        System.out.println("\nSTRING REPLACE---");
        String result = sample.replace("fox", "cat"); 
        System.out.println(result);

        System.out.println("\n---UPPERCASE---");
        System.out.println(sample.toUpperCase());
        
        String reverse ="";
        for(int i=sample.length() - 1; i >=0 ; i--) {
            reverse = reverse + sample.charAt(i);
        }
        System.out.println("\n---Reverse String---");
        System.out.println(reverse);
    }
    
}
