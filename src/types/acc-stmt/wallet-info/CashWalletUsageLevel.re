  type t =
  | Sufficient
  | AlmostExhausted
  | Exhausted;

let fromString = (level: string): t =>
  switch (level) {
  | "Sufficient" => Sufficient
  | "AlmostExhausted" => AlmostExhausted
  | "Exhausted" => Exhausted
  | _ => raise(Not_found)
};