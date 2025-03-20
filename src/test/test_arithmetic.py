import subprocess
import os

# Change to the correct build directory where the executable is located
os.chdir('/mnt/c/CProjects/JenKinCIDemo/src/build')

def run_program(args):
    # Provide full path to the 'arithmetic' executable
    result = subprocess.run(["./arithmetic"] + args, capture_output=True, text=True)
    return result.stdout.strip()

# Example test function for addition
def test_addition():
    output = run_program(["add", "5", "3"])
    assert output == "8", f"Expected 8, got {output}"

test_addition()
