from pathlib import Path


def test_package_structure():
    root = Path(__file__).resolve().parents[1]
    assert (root / "package.xml").exists()
    assert (root / "setup.py").exists()
    assert (root / "turtle_reaction" / "reaction_node.py").exists()
