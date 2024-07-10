class Solution {
    public int minMovesToSeat(int[] seats, int[] students) {
        Arrays.sort(seats);
        Arrays.sort(students);
        int i=0;
        int j=0;
        int res=0;
        while(i<seats.length && j<students.length)
        {
            if(seats[i]<students[j])
            {
                res+=students[j]-seats[i];
            }
            else 
            {
                res+=seats[i]-students[j];
            }
            i++;
            j++;
        }
        return res;
    }
}