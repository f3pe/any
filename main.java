import java.util.*;

public class Main {

    public static Set<Set<Integer>> getSubSets(Set<Integer> originalSet) {
        Set<Set<Integer>> powerSet = new HashSet<>();
        powerSet.add(new HashSet<>());

        for (Integer element : originalSet) {
            Set<Set<Integer>> newSubsets = new HashSet<>();

            for (Set<Integer> subset : powerSet) {
                Set<Integer> newSubset = new HashSet<>(subset);
                newSubset.add(element);
                newSubsets.add(newSubset);
            }

            powerSet.addAll(newSubsets);
        }

        return powerSet;
    }

    public static void main(String[] args) {
        Set<Integer> inputSet = new HashSet<>(Arrays.asList(1, 2, 3));
        Set<Set<Integer>> allSubsets = getSubSets(inputSet);
        System.out.println("Todos os subconjuntos:");
        System.out.print(allSubsets);
    }
}
