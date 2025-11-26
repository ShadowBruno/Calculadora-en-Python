class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def preorder(root):
    """Preorder: raíz → izquierda → derecha"""
    if root is None:
        return []
    return [root.value] + preorder(root.left) + preorder(root.right)

def inorder(root):
    """Inorder: izquierda → raíz → derecha"""
    if root is None:
        return []
    return inorder(root.left) + [root.value] + inorder(root.right)

def postorder(root):
    """Postorder: izquierda → derecha → raíz"""
    if root is None:
        return []
    return postorder(root.left) + postorder(root.right) + [root.value]

if __name__ == "__main__":
    r = Node("r")
    a = Node("a")
    b = Node("b")
    c = Node("c")
    d = Node("d")
    e = Node("e")
    f = Node("f")
    g = Node("g")

    r.left = a
    r.right = b

    a.left = c
    a.right = d

    b.left = e
    b.right = f

    f.left = g
    print("Preorder: ", preorder(r))
    print("Inorder:  ", inorder(r))
    print("Postorder:", postorder(r))