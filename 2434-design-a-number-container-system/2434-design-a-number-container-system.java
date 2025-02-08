class NumberContainers {
    Map<Integer, TreeSet<Integer>> map;
    Map<Integer, Integer> indexMap;
    public NumberContainers() {
        map = new HashMap<>();
        indexMap = new HashMap<>();
    }
    public void change(int index, int number) {
        if (indexMap.containsKey(index)) {
            int prevNumber = indexMap.get(index);
            if (map.containsKey(prevNumber)) {
                map.get(prevNumber).remove(index);
                if (map.get(prevNumber).isEmpty()) {
                    map.remove(prevNumber);
                }
            }
        }
        indexMap.put(index, number);
        map.putIfAbsent(number, new TreeSet<>());
        map.get(number).add(index);
    }
    public int find(int number) {
        return map.containsKey(number) && !map.get(number).isEmpty() ? map.get(number).first() : -1;
    }
}