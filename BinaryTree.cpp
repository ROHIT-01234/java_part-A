class Node {
    int data;
    Node left, right;

    public Node(int item) {
        data = item;
        left = right = null;
    }
}

class binary_tree {
    Node root;
    int getLevelDiff(Node node) {
        if (node == null)
            return 0;
        return node.data - getLevelDiff(node.left) - getLevelDiff(node.right);
    }

    public static void main(String[] args) {
        binary_tree tree = new binary_tree();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
        tree.root.right.left = new Node(6);
        tree.root.right.right = new Node(7);
        int levelDiff = tree.getLevelDiff(tree.root);
        System.out.println("Difference between sum of odd and even level nodes: " + levelDiff);
    }
}
