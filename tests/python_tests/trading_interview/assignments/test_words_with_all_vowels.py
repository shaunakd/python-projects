import pytest
from src.python_projects.trading_interview.assignments.words_with_all_vowels import (
    get_words_with_all_vowels,
)

pytestmark = pytest.mark.unit


@pytest.mark.parametrize(
    "words, expected_output",
    [
        pytest.param(
            ["car", "Multidirectional", "hello", "OVERqualified", "university"],
            ["Multidirectional", "OVERqualified"],
            id="case_1",
        )
    ],
)
def test_get_words_with_all_vowels(words, expected_output):
    assert get_words_with_all_vowels(words) == expected_output
